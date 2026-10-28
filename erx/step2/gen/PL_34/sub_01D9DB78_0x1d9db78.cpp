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

// Function: sub_01D9DB78
// Address: 0x1d9db78 - 0x1d9dca0
void sub_01D9DB78_0x1d9db78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9DB78_0x1d9db78");
#endif

    switch (ctx->pc) {
        case 0x1d9dbb0u: goto label_1d9dbb0;
        case 0x1d9dbe0u: goto label_1d9dbe0;
        case 0x1d9dbf0u: goto label_1d9dbf0;
        case 0x1d9dc00u: goto label_1d9dc00;
        case 0x1d9dc44u: goto label_1d9dc44;
        case 0x1d9dc60u: goto label_1d9dc60;
        case 0x1d9dc70u: goto label_1d9dc70;
        default: break;
    }

    ctx->pc = 0x1d9db78u;

    // 0x1d9db78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9db78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9db7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9db7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d9db80: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d9db80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d9db84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9db88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d9db88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9db8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9db8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9db90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d9db90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d9db94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d9db94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d9db98: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1d9db98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1d9db9c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d9db9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9dba0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d9dba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d9dba4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d9dba4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9dba8: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9DBA8u;
    SET_GPR_U32(ctx, 31, 0x1D9DBB0u);
    ctx->pc = 0x1D9DBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DBA8u;
    // 0x1d9dbac: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9DBA8u, 0x1D9DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DBB0u;
label_1d9dbb0:
    // 0x1d9dbb0: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1d9dbb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d9dbb4: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1d9dbb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d9dbb8: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1d9dbb8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d9dbbc: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1d9dbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1d9dbc0: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1d9dbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1d9dbc4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d9dbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d9dbc8: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1d9dbc8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d9dbcc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d9dbccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d9dbd0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d9dbd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d9dbd4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d9dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d9dbd8: 0xc767246  jal         func_1D9C918
    ctx->pc = 0x1D9DBD8u;
    SET_GPR_U32(ctx, 31, 0x1D9DBE0u);
    ctx->pc = 0x1D9DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DBD8u;
    // 0x1d9dbdc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C918u, 0x1D9DBD8u, 0x1D9DBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DBE0u;
label_1d9dbe0:
    // 0x1d9dbe0: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1d9dbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d9dbe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9dbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9dbe8: 0xc767246  jal         func_1D9C918
    ctx->pc = 0x1D9DBE8u;
    SET_GPR_U32(ctx, 31, 0x1D9DBF0u);
    ctx->pc = 0x1D9DBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DBE8u;
    // 0x1d9dbec: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C918u, 0x1D9DBE8u, 0x1D9DBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DBF0u;
label_1d9dbf0:
    // 0x1d9dbf0: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1d9dbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1d9dbf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9dbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9dbf8: 0xc767248  jal         func_1D9C920
    ctx->pc = 0x1D9DBF8u;
    SET_GPR_U32(ctx, 31, 0x1D9DC00u);
    ctx->pc = 0x1D9DBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DBF8u;
    // 0x1d9dbfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C920u, 0x1D9DBF8u, 0x1D9DC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DC00u;
label_1d9dc00:
    // 0x1d9dc00: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1d9dc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9dc04: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d9dc04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d9dc08: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1d9dc08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d9dc0c: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1d9dc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1d9dc10: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d9dc10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d9dc14: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1d9dc14u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1d9dc18: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1d9dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9dc1c: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1d9dc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1d9dc20: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1d9dc20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1d9dc24: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d9dc24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d9dc28: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1d9dc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9dc2c: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1d9dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1d9dc30: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1d9dc30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1d9dc34: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1d9dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1d9dc38: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1d9dc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9dc3c: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1d9dc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1d9dc40: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1d9dc40u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1d9dc44:
    // 0x1d9dc44: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1d9dc44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1d9dc48: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d9dc48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d9dc4c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1d9dc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1d9dc50: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d9dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d9dc54: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1d9dc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1d9dc58: 0xc767246  jal         func_1D9C918
    ctx->pc = 0x1D9DC58u;
    SET_GPR_U32(ctx, 31, 0x1D9DC60u);
    ctx->pc = 0x1D9DC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DC58u;
    // 0x1d9dc5c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C918u, 0x1D9DC58u, 0x1D9DC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DC60u;
label_1d9dc60:
    // 0x1d9dc60: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1d9dc60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1d9dc64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9dc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9dc68: 0xc767246  jal         func_1D9C918
    ctx->pc = 0x1D9DC68u;
    SET_GPR_U32(ctx, 31, 0x1D9DC70u);
    ctx->pc = 0x1D9DC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DC68u;
    // 0x1d9dc6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C918u, 0x1D9DC68u, 0x1D9DC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DC70u;
label_1d9dc70:
    // 0x1d9dc70: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1d9dc70u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d9dc74: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D9DC74u;
    {
        const bool branch_taken_0x1d9dc74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DC74u;
        // 0x1d9dc78: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9dc74) {
            ctx->pc = 0x1D9DC44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9dc44;
        }
    }
    ctx->pc = 0x1D9DC7Cu;
    // 0x1d9dc7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9dc7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9dc80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9dc80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9dc84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9dc84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9dc88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9dc88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9dc8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d9dc8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9dc90: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d9dc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d9dc94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9DC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DC94u;
        // 0x1d9dc98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9DC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9DC9Cu;
    // 0x1d9dc9c: 0x0  nop
    ctx->pc = 0x1d9dc9cu;
    // NOP
    ctx->pc = 0x1d9dca0u;
}
