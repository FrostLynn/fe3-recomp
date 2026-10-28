#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01D28E28
// Address: 0x1d28e28 - 0x1d29088
void sub_01D28E28_0x1d28e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D28E28_0x1d28e28");
#endif

    switch (ctx->pc) {
        case 0x1d28e4cu: goto label_1d28e4c;
        case 0x1d28e64u: goto label_1d28e64;
        case 0x1d28e68u: goto label_1d28e68;
        case 0x1d28e88u: goto label_1d28e88;
        case 0x1d28e98u: goto label_1d28e98;
        case 0x1d28ed0u: goto label_1d28ed0;
        case 0x1d28ed4u: goto label_1d28ed4;
        case 0x1d28f10u: goto label_1d28f10;
        case 0x1d28f60u: goto label_1d28f60;
        case 0x1d28f68u: goto label_1d28f68;
        case 0x1d28f70u: goto label_1d28f70;
        case 0x1d29044u: goto label_1d29044;
        case 0x1d29064u: goto label_1d29064;
        case 0x1d29070u: goto label_1d29070;
        default: break;
    }

    ctx->pc = 0x1d28e28u;

    // 0x1d28e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d28e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d28e2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d28e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d28e30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d28e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d28e34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d28e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d28e38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d28e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28e3c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d28e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d28e40: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d28e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d28e44: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D28E44u;
    SET_GPR_U32(ctx, 31, 0x1D28E4Cu);
    ctx->pc = 0x1D28E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28E44u;
    // 0x1d28e48: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D28E44u, 0x1D28E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28E4Cu;
label_1d28e4c:
    // 0x1d28e4c: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d28e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d28e50: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D28E50u;
    {
        const bool branch_taken_0x1d28e50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28E50u;
        // 0x1d28e54: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28e50) {
            ctx->pc = 0x1D28EA0u;
            goto label_1d28ea0;
        }
    }
    ctx->pc = 0x1D28E58u;
    // 0x1d28e58: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d28e58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28e5c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D28E5Cu;
    {
        const bool branch_taken_0x1d28e5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d28e5c) {
            ctx->pc = 0x1D28E80u;
            goto label_1d28e80;
        }
    }
    ctx->pc = 0x1D28E64u;
label_1d28e64:
    // 0x1d28e64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d28e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d28e68:
    // 0x1d28e68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d28e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d28e6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d28e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d28e70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d28e70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d28e74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d28e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d28e78: 0x3e00008  jr          $ra
    ctx->pc = 0x1D28E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D28E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28E78u;
        // 0x1d28e7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D28E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D28E80u;
label_1d28e80:
    // 0x1d28e80: 0xc749b16  jal         func_1D26C58
    ctx->pc = 0x1D28E80u;
    SET_GPR_U32(ctx, 31, 0x1D28E88u);
    ctx->pc = 0x1D28E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28E80u;
    // 0x1d28e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C58u, 0x1D28E80u, 0x1D28E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28E88u;
label_1d28e88:
    // 0x1d28e88: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D28E88u;
    {
        const bool branch_taken_0x1d28e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1d28e88) {
            ctx->pc = 0x1D28E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D28E88u;
            // 0x1d28e8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D28E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28e68;
        }
    }
    ctx->pc = 0x1D28E90u;
    // 0x1d28e90: 0xc749b18  jal         func_1D26C60
    ctx->pc = 0x1D28E90u;
    SET_GPR_U32(ctx, 31, 0x1D28E98u);
    ctx->pc = 0x1D28E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28E90u;
    // 0x1d28e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C60u, 0x1D28E90u, 0x1D28E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28E98u;
label_1d28e98:
    // 0x1d28e98: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D28E98u;
    {
        const bool branch_taken_0x1d28e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28E98u;
        // 0x1d28e9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28e98) {
            ctx->pc = 0x1D28E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28e68;
        }
    }
    ctx->pc = 0x1D28EA0u;
label_1d28ea0:
    // 0x1d28ea0: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1d28ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d28ea4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d28ea4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28ea8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1d28ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d28eac: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1d28eacu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d28eb0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d28eb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d28eb4: 0x11cf0048  beq         $t6, $t7, . + 4 + (0x48 << 2)
    ctx->pc = 0x1D28EB4u;
    {
        const bool branch_taken_0x1d28eb4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D28EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28EB4u;
        // 0x1d28eb8: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28eb4) {
            ctx->pc = 0x1D28FD8u;
            goto label_1d28fd8;
        }
    }
    ctx->pc = 0x1D28EBCu;
    // 0x1d28ebc: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1d28ebcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d28ec0: 0x11e00030  beqz        $t7, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D28EC0u;
    {
        const bool branch_taken_0x1d28ec0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28EC0u;
        // 0x1d28ec4: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28ec0) {
            ctx->pc = 0x1D28F84u;
            goto label_1d28f84;
        }
    }
    ctx->pc = 0x1D28EC8u;
    // 0x1d28ec8: 0x11c00014  beqz        $t6, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D28EC8u;
    {
        const bool branch_taken_0x1d28ec8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28EC8u;
        // 0x1d28ecc: 0x3c0f01d3  lui         $t7, 0x1D3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28ec8) {
            ctx->pc = 0x1D28F1Cu;
            goto label_1d28f1c;
        }
    }
    ctx->pc = 0x1D28ED0u;
label_1d28ed0:
    // 0x1d28ed0: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1d28ed0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1d28ed4:
    // 0x1d28ed4: 0x15e0ffe4  bnez        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D28ED4u;
    {
        const bool branch_taken_0x1d28ed4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D28ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28ED4u;
        // 0x1d28ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28ed4) {
            ctx->pc = 0x1D28E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28e68;
        }
    }
    ctx->pc = 0x1D28EDCu;
    // 0x1d28edc: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d28edcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d28ee0: 0x3c0e01d3  lui         $t6, 0x1D3
    ctx->pc = 0x1d28ee0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)467 << 16));
    // 0x1d28ee4: 0x25ced140  addiu       $t6, $t6, -0x2EC0
    ctx->pc = 0x1d28ee4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294955328));
    // 0x1d28ee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d28ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28eec: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d28eecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d28ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d28ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28ef4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d28ef4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d28ef8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d28ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28efc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d28efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d28f00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d28f00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28f04: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d28f04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28f08: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D28F08u;
    SET_GPR_U32(ctx, 31, 0x1D28F10u);
    ctx->pc = 0x1D28F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28F08u;
    // 0x1d28f0c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D28F08u, 0x1D28F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28F10u;
label_1d28f10:
    // 0x1d28f10: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d28f10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28f14: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x1D28F14u;
    {
        const bool branch_taken_0x1d28f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28F14u;
        // 0x1d28f18: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28f14) {
            ctx->pc = 0x1D28E64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28e64;
        }
    }
    ctx->pc = 0x1D28F1Cu;
label_1d28f1c:
    // 0x1d28f1c: 0x25ef3390  addiu       $t7, $t7, 0x3390
    ctx->pc = 0x1d28f1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13200));
    // 0x1d28f20: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d28f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d28f24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d28f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d28f28: 0x4500ffe9  bc1f        . + 4 + (-0x17 << 2)
    ctx->pc = 0x1D28F28u;
    {
        const bool branch_taken_0x1d28f28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D28F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28F28u;
        // 0x1d28f2c: 0x3c0f01d3  lui         $t7, 0x1D3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28f28) {
            ctx->pc = 0x1D28ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28ed0;
        }
    }
    ctx->pc = 0x1D28F30u;
    // 0x1d28f30: 0x25ef3394  addiu       $t7, $t7, 0x3394
    ctx->pc = 0x1d28f30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13204));
    // 0x1d28f34: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d28f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d28f38: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d28f38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d28f3c: 0x4503ffe5  bc1tl       . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D28F3Cu;
    {
        const bool branch_taken_0x1d28f3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d28f3c) {
            ctx->pc = 0x1D28F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D28F3Cu;
            // 0x1d28f40: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D28ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28ed4;
        }
    }
    ctx->pc = 0x1D28F44u;
    // 0x1d28f44: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d28f44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d28f48: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1d28f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d28f4c: 0x25ef3398  addiu       $t7, $t7, 0x3398
    ctx->pc = 0x1d28f4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13208));
    // 0x1d28f50: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1d28f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1d28f54: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d28f54u;
    { uint32_t bits = FAST_READ32(0x1D33398u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d28f58: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d28f58u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d28f5c: 0x25ef339c  addiu       $t7, $t7, 0x339C
    ctx->pc = 0x1d28f5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13212));
label_1d28f60:
    // 0x1d28f60: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1d28f60u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1d28f64: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1d28f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1d28f68:
    // 0x1d28f68: 0xc749db0  jal         func_1D276C0
    ctx->pc = 0x1D28F68u;
    SET_GPR_U32(ctx, 31, 0x1D28F70u);
    ctx->pc = 0x1D276C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D276C0u, 0x1D28F68u, 0x1D28F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28F70u;
label_1d28f70:
    // 0x1d28f70: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d28f70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d28f74: 0x25ef33a0  addiu       $t7, $t7, 0x33A0
    ctx->pc = 0x1d28f74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13216));
    // 0x1d28f78: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d28f78u;
    { uint32_t bits = FAST_READ32(0x1D333A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d28f7c: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x1D28F7Cu;
    {
        const bool branch_taken_0x1d28f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28F7Cu;
        // 0x1d28f80: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28f7c) {
            ctx->pc = 0x1D28ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28ed0;
        }
    }
    ctx->pc = 0x1D28F84u;
label_1d28f84:
    // 0x1d28f84: 0x55cfffd3  bnel        $t6, $t7, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1D28F84u;
    {
        const bool branch_taken_0x1d28f84 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1d28f84) {
            ctx->pc = 0x1D28F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D28F84u;
            // 0x1d28f88: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D28ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28ed4;
        }
    }
    ctx->pc = 0x1D28F8Cu;
    // 0x1d28f8c: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d28f8cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d28f90: 0x25ef3390  addiu       $t7, $t7, 0x3390
    ctx->pc = 0x1d28f90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13200));
    // 0x1d28f94: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d28f94u;
    { uint32_t bits = FAST_READ32(0x1D33390u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d28f98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d28f98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d28f9c: 0x4500ffcc  bc1f        . + 4 + (-0x34 << 2)
    ctx->pc = 0x1D28F9Cu;
    {
        const bool branch_taken_0x1d28f9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D28FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28F9Cu;
        // 0x1d28fa0: 0x3c0f01d3  lui         $t7, 0x1D3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28f9c) {
            ctx->pc = 0x1D28ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28ed0;
        }
    }
    ctx->pc = 0x1D28FA4u;
    // 0x1d28fa4: 0x25ef3394  addiu       $t7, $t7, 0x3394
    ctx->pc = 0x1d28fa4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13204));
    // 0x1d28fa8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d28fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d28fac: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d28facu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d28fb0: 0x4503ffc8  bc1tl       . + 4 + (-0x38 << 2)
    ctx->pc = 0x1D28FB0u;
    {
        const bool branch_taken_0x1d28fb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d28fb0) {
            ctx->pc = 0x1D28FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D28FB0u;
            // 0x1d28fb4: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D28ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28ed4;
        }
    }
    ctx->pc = 0x1D28FB8u;
    // 0x1d28fb8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1d28fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d28fbc: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d28fbcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d28fc0: 0x25ef3398  addiu       $t7, $t7, 0x3398
    ctx->pc = 0x1d28fc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13208));
    // 0x1d28fc4: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1d28fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1d28fc8: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1d28fc8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1d28fcc: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1d28fccu;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1d28fd0: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D28FD0u;
    {
        const bool branch_taken_0x1d28fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28FD0u;
        // 0x1d28fd4: 0xc5ec0000  lwc1        $f12, 0x0($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28fd0) {
            ctx->pc = 0x1D28F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28f68;
        }
    }
    ctx->pc = 0x1D28FD8u;
label_1d28fd8:
    // 0x1d28fd8: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d28fd8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d28fdc: 0x25ef3390  addiu       $t7, $t7, 0x3390
    ctx->pc = 0x1d28fdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13200));
    // 0x1d28fe0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d28fe0u;
    { uint32_t bits = FAST_READ32(0x1D33390u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d28fe4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d28fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d28fe8: 0x4500ffb9  bc1f        . + 4 + (-0x47 << 2)
    ctx->pc = 0x1D28FE8u;
    {
        const bool branch_taken_0x1d28fe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D28FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28FE8u;
        // 0x1d28fec: 0x3c0f01d3  lui         $t7, 0x1D3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28fe8) {
            ctx->pc = 0x1D28ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28ed0;
        }
    }
    ctx->pc = 0x1D28FF0u;
    // 0x1d28ff0: 0x25ef3394  addiu       $t7, $t7, 0x3394
    ctx->pc = 0x1d28ff0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13204));
    // 0x1d28ff4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d28ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d28ff8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d28ff8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d28ffc: 0x4503ffb5  bc1tl       . + 4 + (-0x4B << 2)
    ctx->pc = 0x1D28FFCu;
    {
        const bool branch_taken_0x1d28ffc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d28ffc) {
            ctx->pc = 0x1D29000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D28FFCu;
            // 0x1d29000: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D28ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28ed4;
        }
    }
    ctx->pc = 0x1D29004u;
    // 0x1d29004: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d29004u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d29008: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1d29008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d2900c: 0x25ef3398  addiu       $t7, $t7, 0x3398
    ctx->pc = 0x1d2900cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13208));
    // 0x1d29010: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1d29010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1d29014: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d29014u;
    { uint32_t bits = FAST_READ32(0x1D33398u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d29018: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d29018u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d2901c: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x1D2901Cu;
    {
        const bool branch_taken_0x1d2901c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2901Cu;
        // 0x1d29020: 0x25ef33a4  addiu       $t7, $t7, 0x33A4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2901c) {
            ctx->pc = 0x1D28F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28f60;
        }
    }
    ctx->pc = 0x1D29024u;
    // 0x1d29024: 0x0  nop
    ctx->pc = 0x1d29024u;
    // NOP
    // 0x1d29028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d29028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2902c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d2902cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d29030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d29030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d29034: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d29034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d29038: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d29038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2903c: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D2903Cu;
    SET_GPR_U32(ctx, 31, 0x1D29044u);
    ctx->pc = 0x1D29040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2903Cu;
    // 0x1d29040: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D2903Cu, 0x1D29044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29044u;
label_1d29044:
    // 0x1d29044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d29044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29048: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d29048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2904c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d2904cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29050: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d29050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29054: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d29054u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d29058: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d29058u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2905c: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D2905Cu;
    SET_GPR_U32(ctx, 31, 0x1D29064u);
    ctx->pc = 0x1D29060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2905Cu;
    // 0x1d29060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D2905Cu, 0x1D29064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29064u;
label_1d29064:
    // 0x1d29064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d29064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29068: 0xc749b1e  jal         func_1D26C78
    ctx->pc = 0x1D29068u;
    SET_GPR_U32(ctx, 31, 0x1D29070u);
    ctx->pc = 0x1D2906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29068u;
    // 0x1d2906c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C78u, 0x1D29068u, 0x1D29070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29070u;
label_1d29070:
    // 0x1d29070: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d29070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d29074: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d29074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d29078: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d29078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d2907c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d2907cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d29080: 0x3e00008  jr          $ra
    ctx->pc = 0x1D29080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D29084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29080u;
        // 0x1d29084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D29080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D29088u;
}
