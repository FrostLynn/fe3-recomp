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

// Function: sub_01C30AB0
// Address: 0x1c30ab0 - 0x1c30bc0
void sub_01C30AB0_0x1c30ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C30AB0_0x1c30ab0");
#endif

    switch (ctx->pc) {
        case 0x1c30ad8u: goto label_1c30ad8;
        case 0x1c30b18u: goto label_1c30b18;
        case 0x1c30b6cu: goto label_1c30b6c;
        default: break;
    }

    ctx->pc = 0x1c30ab0u;

    // 0x1c30ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c30ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c30ab4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c30ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c30ab8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c30ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c30abc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c30abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c30ac0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c30ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30ac4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c30ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c30ac8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c30ac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30acc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c30accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c30ad0: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C30AD0u;
    SET_GPR_U32(ctx, 31, 0x1C30AD8u);
    ctx->pc = 0x1C30AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30AD0u;
    // 0x1c30ad4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C30AD0u, 0x1C30AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30AD8u;
label_1c30ad8:
    // 0x1c30ad8: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c30ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c30adc: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x1c30adcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c30ae0: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c30ae0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c30ae4: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1c30ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1c30ae8: 0xae2f0184  sw          $t7, 0x184($s1)
    ctx->pc = 0x1c30ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 15));
    // 0x1c30aec: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1c30aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1c30af0: 0x8dcd0084  lw          $t5, 0x84($t6)
    ctx->pc = 0x1c30af0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c30af4: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c30af4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c30af8: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x1c30af8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c30afc: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c30afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c30b00: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1c30b00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1c30b04: 0x25af00f0  addiu       $t7, $t5, 0xF0
    ctx->pc = 0x1c30b04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 240));
    // 0x1c30b08: 0x25ad0110  addiu       $t5, $t5, 0x110
    ctx->pc = 0x1c30b08u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 272));
    // 0x1c30b0c: 0xae2f0174  sw          $t7, 0x174($s1)
    ctx->pc = 0x1c30b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 15));
    // 0x1c30b10: 0xc70bdc6  jal         func_1C2F718
    ctx->pc = 0x1C30B10u;
    SET_GPR_U32(ctx, 31, 0x1C30B18u);
    ctx->pc = 0x1C30B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30B10u;
    // 0x1c30b14: 0xae2d0170  sw          $t5, 0x170($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F718u, 0x1C30B10u, 0x1C30B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30B18u;
label_1c30b18:
    // 0x1c30b18: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x1c30b18u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c30b1c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c30b1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c30b20: 0x8e4e000c  lw          $t6, 0xC($s2)
    ctx->pc = 0x1c30b20u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c30b24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c30b24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30b28: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c30b28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c30b2c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1c30b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30b30: 0xae2e0188  sw          $t6, 0x188($s1)
    ctx->pc = 0x1c30b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 14));
    // 0x1c30b34: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x1c30b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x1c30b38: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x1c30b38u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c30b3c: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x1c30b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30b40: 0xae2f018c  sw          $t7, 0x18C($s1)
    ctx->pc = 0x1c30b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 15));
    // 0x1c30b44: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x1c30b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1c30b48: 0x8e4e0014  lw          $t6, 0x14($s2)
    ctx->pc = 0x1c30b48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1c30b4c: 0x8e0f00b4  lw          $t7, 0xB4($s0)
    ctx->pc = 0x1c30b4cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c30b50: 0xae2e0190  sw          $t6, 0x190($s1)
    ctx->pc = 0x1c30b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 14));
    // 0x1c30b54: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1c30b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30b58: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1c30b58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1c30b5c: 0x8e4e0038  lw          $t6, 0x38($s2)
    ctx->pc = 0x1c30b5cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1c30b60: 0xae2f017c  sw          $t7, 0x17C($s1)
    ctx->pc = 0x1c30b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 15));
    // 0x1c30b64: 0xe6200194  swc1        $f0, 0x194($s1)
    ctx->pc = 0x1c30b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x1c30b68: 0xae2e0198  sw          $t6, 0x198($s1)
    ctx->pc = 0x1c30b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 14));
label_1c30b6c:
    // 0x1c30b6c: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1c30b6cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1c30b70: 0x1f26021  addu        $t4, $t7, $s2
    ctx->pc = 0x1c30b70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x1c30b74: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c30b74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c30b78: 0x8d8d0040  lw          $t5, 0x40($t4)
    ctx->pc = 0x1c30b78u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1c30b7c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c30b7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c30b80: 0x294b0004  slti        $t3, $t2, 0x4
    ctx->pc = 0x1c30b80u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c30b84: 0xaded01a0  sw          $t5, 0x1A0($t7)
    ctx->pc = 0x1c30b84u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 416), GPR_U32(ctx, 13));
    // 0x1c30b88: 0x8d8e0044  lw          $t6, 0x44($t4)
    ctx->pc = 0x1c30b88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x1c30b8c: 0xadee01a4  sw          $t6, 0x1A4($t7)
    ctx->pc = 0x1c30b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 420), GPR_U32(ctx, 14));
    // 0x1c30b90: 0x8d8d0048  lw          $t5, 0x48($t4)
    ctx->pc = 0x1c30b90u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1c30b94: 0xaded01a8  sw          $t5, 0x1A8($t7)
    ctx->pc = 0x1c30b94u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 424), GPR_U32(ctx, 13));
    // 0x1c30b98: 0x8d8e004c  lw          $t6, 0x4C($t4)
    ctx->pc = 0x1c30b98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1c30b9c: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C30B9Cu;
    {
        const bool branch_taken_0x1c30b9c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C30BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30B9Cu;
        // 0x1c30ba0: 0xadee01ac  sw          $t6, 0x1AC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 428), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30b9c) {
            ctx->pc = 0x1C30B6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c30b6c;
        }
    }
    ctx->pc = 0x1C30BA4u;
    // 0x1c30ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c30ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c30ba8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c30ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c30bac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c30bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c30bb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c30bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c30bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C30BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C30BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30BB4u;
        // 0x1c30bb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C30BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C30BBCu;
    // 0x1c30bbc: 0x0  nop
    ctx->pc = 0x1c30bbcu;
    // NOP
    ctx->pc = 0x1c30bc0u;
}
