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

// Function: sub_01C10978
// Address: 0x1c10978 - 0x1c10aa0
void sub_01C10978_0x1c10978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C10978_0x1c10978");
#endif

    switch (ctx->pc) {
        case 0x1c109b0u: goto label_1c109b0;
        case 0x1c109e0u: goto label_1c109e0;
        case 0x1c109f0u: goto label_1c109f0;
        case 0x1c10a00u: goto label_1c10a00;
        case 0x1c10a44u: goto label_1c10a44;
        case 0x1c10a60u: goto label_1c10a60;
        case 0x1c10a70u: goto label_1c10a70;
        default: break;
    }

    ctx->pc = 0x1c10978u;

    // 0x1c10978: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c10978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1097c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c1097cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c10980: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c10980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c10984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c10984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c10988: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c10988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1098c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1098cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c10990: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c10990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c10994: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c10994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c10998: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1c10998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1c1099c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c1099cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c109a0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c109a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c109a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c109a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c109a8: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C109A8u;
    SET_GPR_U32(ctx, 31, 0x1C109B0u);
    ctx->pc = 0x1C109ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C109A8u;
    // 0x1c109ac: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C109A8u, 0x1C109B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C109B0u;
label_1c109b0:
    // 0x1c109b0: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c109b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c109b4: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1c109b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c109b8: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c109b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c109bc: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1c109bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1c109c0: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1c109c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1c109c4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c109c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c109c8: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1c109c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1c109cc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c109ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c109d0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c109d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c109d4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c109d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c109d8: 0xc703dc6  jal         func_1C0F718
    ctx->pc = 0x1C109D8u;
    SET_GPR_U32(ctx, 31, 0x1C109E0u);
    ctx->pc = 0x1C109DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C109D8u;
    // 0x1c109dc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F718u, 0x1C109D8u, 0x1C109E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C109E0u;
label_1c109e0:
    // 0x1c109e0: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1c109e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c109e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c109e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c109e8: 0xc703dc6  jal         func_1C0F718
    ctx->pc = 0x1C109E8u;
    SET_GPR_U32(ctx, 31, 0x1C109F0u);
    ctx->pc = 0x1C109ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C109E8u;
    // 0x1c109ec: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F718u, 0x1C109E8u, 0x1C109F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C109F0u;
label_1c109f0:
    // 0x1c109f0: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1c109f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1c109f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c109f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c109f8: 0xc703dc8  jal         func_1C0F720
    ctx->pc = 0x1C109F8u;
    SET_GPR_U32(ctx, 31, 0x1C10A00u);
    ctx->pc = 0x1C109FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C109F8u;
    // 0x1c109fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F720u, 0x1C109F8u, 0x1C10A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10A00u;
label_1c10a00:
    // 0x1c10a00: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1c10a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c10a04: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c10a04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c10a08: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1c10a08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c10a0c: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1c10a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1c10a10: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c10a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c10a14: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1c10a14u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c10a18: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1c10a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c10a1c: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1c10a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1c10a20: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1c10a20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1c10a24: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c10a24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c10a28: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1c10a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c10a2c: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1c10a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1c10a30: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1c10a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1c10a34: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1c10a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1c10a38: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1c10a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c10a3c: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1c10a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1c10a40: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1c10a40u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1c10a44:
    // 0x1c10a44: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1c10a44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c10a48: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c10a48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c10a4c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1c10a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1c10a50: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c10a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c10a54: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1c10a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1c10a58: 0xc703dc6  jal         func_1C0F718
    ctx->pc = 0x1C10A58u;
    SET_GPR_U32(ctx, 31, 0x1C10A60u);
    ctx->pc = 0x1C10A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10A58u;
    // 0x1c10a5c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F718u, 0x1C10A58u, 0x1C10A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10A60u;
label_1c10a60:
    // 0x1c10a60: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1c10a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1c10a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c10a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10a68: 0xc703dc6  jal         func_1C0F718
    ctx->pc = 0x1C10A68u;
    SET_GPR_U32(ctx, 31, 0x1C10A70u);
    ctx->pc = 0x1C10A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10A68u;
    // 0x1c10a6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F718u, 0x1C10A68u, 0x1C10A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10A70u;
label_1c10a70:
    // 0x1c10a70: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1c10a70u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c10a74: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C10A74u;
    {
        const bool branch_taken_0x1c10a74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C10A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10A74u;
        // 0x1c10a78: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10a74) {
            ctx->pc = 0x1C10A44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c10a44;
        }
    }
    ctx->pc = 0x1C10A7Cu;
    // 0x1c10a7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c10a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c10a80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c10a80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c10a84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c10a84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c10a88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c10a88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c10a8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c10a8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c10a90: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c10a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c10a94: 0x3e00008  jr          $ra
    ctx->pc = 0x1C10A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C10A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10A94u;
        // 0x1c10a98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C10A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C10A9Cu;
    // 0x1c10a9c: 0x0  nop
    ctx->pc = 0x1c10a9cu;
    // NOP
    ctx->pc = 0x1c10aa0u;
}
